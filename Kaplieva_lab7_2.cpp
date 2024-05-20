#include <iostream>
#include <fstream>
#include "Flist.h"

bool task(FLIST& list);

int main()
{
	std::ifstream file("file.txt");
	FLIST list;
	list.create_by_queue(file);
	list.print("");
}

bool task(FLIST& list)
{
	TInfo cnt{ 1 };
	ptrNODE ptr = list.get_head()->next;
	while (ptr)
	{
		if (ptr->info == ptr->next->info)
		{
			ptrNODE tmp_ptr = ptr;
			cnt++;
		}
		else
		{
			cnt = 1;

		}
	}
}
