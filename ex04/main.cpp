//OBJECTIF :
// ./sed file cat dog
// chaque cat de file sera remplacer par dog dans file.replaced

//LOGIQUE
// ouvrir file
// copie tout le contenu
// parcourir et trouver les S1 exactes puis remplacer par S2
// coller tout ca dans file.replace 

#include <string>
#include <iostream>
#include <fstream>

std::string save_content(std::ifstream &file)
{
    std::string line;
    std::string input;
    while(std::getline(file, line))
    {
        input += line;
        input += "\n";
    }

    return input;
}

void find_n_replace(std::string &content, const char *s1, const char *s2)
{
    std::string str1(s1);
    std::string str2(s2);
    size_t pos = 0;

    while((pos = content.find(str1, pos)) != std::string::npos)
    {
        content.erase(pos, str1.length());
        content.insert(pos, s2);
        pos += str2.length();
    }
}

int main(int ac, char **av)
{
    if(ac != 4)
        return 1;

    std::string content;
    std::string repfile(av[1]);
    std::ifstream file(av[1]);

    repfile += ".replace";

    if(!file)
    {
        std::cerr << "Cannot open file" << std::endl;
        return 1;
    }
    else
    {
        content = save_content(file);
        find_n_replace(content, av[2], av[3]); 
    }
    std::ofstream replace(repfile.c_str());
    if(!replace)
    {
        std::cerr << "Cannot open replace.file" << std::endl;
        return 1;
    }
    else 
        replace << content;

    return(0);
}
