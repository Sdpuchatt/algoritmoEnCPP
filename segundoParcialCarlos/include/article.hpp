#ifndef ARTICLE_HPP
#define ARTICLE_HPP

#include <string>

using namespace std;

class Article 
    {
        private:
            string code, name;
            float price;
            
        public:
            Article(string _code, string _name, float _price);
            ~Article();  // destructor solo a modo de prueba
            string getCode();
            string getName();
            float getPrice();
    };

#endif