#ifndef ARTICLE_HPP
#define ARTICLE_HPP

#include <string>

class Article
{
    private: 
        string code;
        string name;
        double price;

    public:
        Article(string code, string name, double price);
        string getCode();
        string getName();
        double getPrice();

};

#endif