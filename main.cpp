#include <iostream>
namespace jingahyun2693303
{
//구조체
struct book
{
    int id{};//;꼭 붙이기
    int price{};
};

book inputbook()
{
    book b{};
    std::cout << "Enter book id: ";
    std:cin >> b.id;
    std::cout << "Enter book price: ";
    std::cin >> b.price;
    return 0;
}

void printBook(const book &b)
{
    std::cout << "book id: " << b.id << std::endl;
    std::cout << "book price: " << b.price << endl;
}

int main()
{
    using namespace jingahyun2693303;
    using namespace std;
    book b1{inputBook()};
    printBook(b1);
    book b2{inputBook()};
    printBook(b2);
    return 0;
}
