#include <Order.hpp>

Order::Order(string code, Customer* customer)
{
    this->code = code;
    this->customer = customer;
}

void Order::attach(Article* article)
{
    this->articleList.push_front(article);
}
void Order::show()
{
    for(article article: articleList)
    {
        cout << "Cliente: " << this->customer->getName() << endl;
        cout << "Codigo de Articulo: " << article->getCode() << endl;
        cout << "Nombre de articulo: " << article->getName() << endl;
        cout << endl;
        cout << endl;
    }
}