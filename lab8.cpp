#include<iostream>
#include<new>
#include<cstlib>
using namespace std;
void customNewHandler()
{
        cerr<<"in customNeweHandler()\n";
        abort();
}
int main()
{
	Mino* mino_ptr;

	srand(time(NULL));
	for (int i=0;i<3;++i)
	{
		set_new_handler(customNewHandler);
		mino_ptr=genMino();
		mino_ptr->paint();
		delete mino_ptr;
	}
	return 0;
}

