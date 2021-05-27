#include "item-with-quantity.h"

ItemWithQuantity::ItemWithQuantity(const char* name, double price, int quantity)
    : price(price), quantity(quantity)
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

double ItemWithQuantity::get_item_price() const
{
    return price;
}

double ItemWithQuantity::get_total_price() const
{
    return get_item_price() * quantity;
}

void ItemWithQuantity::add_quantity(int quantity)
{
    if (quantity < 0)
    {
        throw std::invalid_argument("Trying to add a negative quantity.");
    }

    this->quantity += quantity;
}

void ItemWithQuantity::remove_quantity(int quantity)
{
    if (quantity < 0)
    {
        throw std::invalid_argument("Trying to remove a negative quantity.");
    }

    this->quantity -= quantity;
}

void ItemWithQuantity::print_statistics() const
{
    std::cout << name << ": " << quantity;
}

void ItemWithQuantity::copy_from(const ItemWithQuantity& other)
{
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);

    price = other.price;
    quantity = other.quantity;
}

void ItemWithQuantity::free_memory()
{
    delete[] name;
}

ItemWithQuantity::ItemWithQuantity(const ItemWithQuantity& other)
{
    copy_from(other);
}

ItemWithQuantity& ItemWithQuantity::operator=(const ItemWithQuantity& other)
{
    if (this != &other)
    {
        free_memory();
        copy_from(other);
    }

    return *this;
}

ItemWithQuantity::~ItemWithQuantity()
{
    free_memory();
}
