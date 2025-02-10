/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-10 05:27:47 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-10 05:27:47 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fstream>
#include <iostream>
#include <string>

// std::string	ft_replace(std::string line, const std::string& from, const std::string& to)
// {
// 	size_t	pos;
	
// 	pos = line.find(from);
// 	while (pos != std::string::npos)
// 	{
// 		line.replace(pos, from.length(), to);
// 		pos = line.find(from, pos + to.length());
// 	}
// 	return (line);
// }

#include <string>

std::string ft_replace(std::string line, const std::string& from, const std::string& to) {
    std::string result;
    size_t pos = 0;
    size_t from_len = from.length();

    while (pos < line.length()) {
        size_t found_pos = line.find(from, pos);
        if (found_pos == std::string::npos) {
            // fromが見つからなかった場合、残りの文字列をresultに追加して終了
            result += line.substr(pos);
            break;
        } else {
            // fromが見つかった場合
            // fromより前の部分をresultに追加
            result += line.substr(pos, found_pos - pos);
            // toをresultに追加
            result += to;
            // posを更新
            pos = found_pos + from_len;
        }
    }
    return result;
}

int	main(int argc, char **argv)
{
	std::string	line;
	std::string	rep;

	if (argc != 4)
	{
		std::cout << "Argument Error\n";
		return (1);
	}
	for (int i = 1; i <= 3; ++i)
	{
		if (std::string(argv[i]).empty())
		{
			std::cout << "Argument Error: Argument " << i << " is empty\n";
			return (1);
		}
	}
	std::ifstream fin(argv[1]);
	if (!fin)
	{
		std::cout << "Can't open file\n";
		return (1);
	}
	rep = ".replace";
	std::ofstream fout((argv[1] + rep).c_str());
	if (!fout)
	{
		std::cout << "Error open file\n";
		fin.close();
		return (1);
	}
	while (1)
	{
		if (std::getline(fin, line))
		{
			line = ft_replace(line, argv[2], argv[3]);
			fout << line << '\n';
		}
		else
		{
			if (fin.eof())
				break ;
			std::cout << "Error reading\n";
			fout.close();
			fin.close();
			return (1);
		}
	}
	fout.close();
	fin.close();
	return (0);
}
