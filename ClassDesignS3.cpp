#include <iostream>
#include <string>
#include "item.h"
#include "store.h"


int main()
{
	Item i("Book", 123, 20.99, 12);
	Item i1("Colored Pencil", 234, 7.99, 15);
	Item i2("Coloring Paper", 345, 3.99, 20);
	Item i3("Markers", 456, 3.99, 50);
	Item i4("Crayons", 567, 10.99, 3);
	Item i5("Staples", 678, 12.99, 7);

	Store s;
	s.addItems(i); s.addItems(i1); s.addItems(i2); s.addItems(i3); s.addItems(i4); s.addItems(i5);
	s.printItem();

	


}


