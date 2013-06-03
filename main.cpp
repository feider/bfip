#include <iostream>
#include <fstream>
#include <string.h>


int main(int argc, char* argv[])
{
    char filename[1024];
    if(argc>1)
    {
        strcpy(filename, argv[1]);
    }
    else
    {
        std::cout<<"Enter Filename: ";
        std::cin>>filename;
    }
    std::cout<<"Filename: "<<filename<<std::endl;

    std::ifstream file;
    file.open(filename, std::ios::in);
    file.seekg(0, std::ios::end);
    int length = file.tellg();
    file.seekg(0, std::ios::beg);
    char* commands = new char[length];
    file.read(commands, length);
    file.close();
    char* ptr = new char[1048576];
    int i = 0;
    int counter = 0;
    while(i<length-1)
    {
            switch(commands[i])
            {
                case '>':
                    ++ptr;
                    break;
                case '<':
                    --ptr;
                    break;
                case '+':
                    ++*ptr;
                    break;
                case '-':
                    --*ptr;
                    break;
                case '.':
                    putchar(*ptr);
                    break;
                case ',':
                    *ptr=getchar();
                    break;
                case '[':
                    if(*ptr==0)
                    {
                        counter = 1;
                        i++;
                        while(counter>0)
                        {
                            switch(commands[i])
                            {
                                case '[':
                                    counter++;
                                    break;
                                case ']':
                                    counter--;
                                    break;
                                default:
                                    break;
                            }
                            i++;
                        }
                        counter=0;
                    }
                    break;
                case ']':
                    if(*ptr!=0)
                    {
                        counter = 1;
                        i--;
                        while(counter>0)
                        {
                            switch(commands[i])
                            {
                                case '[':
                                    counter--;
                                    break;
                                case ']':
                                    counter++;
                                    break;
                                default:
                                    break;
                            }
                            i--;
                        }
                        counter=0;
                    }
                    break;
                default:
                    break;
            }
            i++;
    }
    putchar('\n');
}
