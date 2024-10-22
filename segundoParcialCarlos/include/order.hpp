#ifndef ORDER_HPP
#define ORDER_HPP

#include "article.hpp"
#include "client.hpp"
#include <string>

using namespace std;

class Order
{
    private:
        string code;
        Client* client;
        Article* articles[20];  // Arreglo fijo de 20 punteros a Article
        int numArticles;

    public:
        Order(string _code, Client* _client);
        string getCode();
        void addArticle(Article* _article);
        void showOrder();
};

#endif