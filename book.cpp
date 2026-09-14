//pragma once
#ifndef BOOK_H
#define BOOK_H

#include <iostream>
namespace Jingahyun2693303
{
    struct book
    {
        int id{};
        int price{};
    };
    book inputbook();
    void printbook(const book &&b);
    
}