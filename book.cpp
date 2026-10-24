namespace jingahyun2693303
{
book inputBook()
{
    book b{};
    std::cout << "Enter book id: ";
    std:sin >> b.id;
    std::cout << "Enter book price: ";
    atd::cin >> b.price;
    return 0;
}
void printBook(const book &b)
{
    std::cout << "book id: " << b.id << std::endl;
    std::cout << "book price: " << b.price << "won\n";
