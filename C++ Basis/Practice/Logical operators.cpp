#include <iostream>
using namespace std;
int main()
{
	int age =  18;
	bool hasId = true;
	
	cout<<"Using AND operator: " << ( age && hasId ) << endl;
	cout<<"Using OR operator: " << ( age || hasId ) << endl;
	cout<<"Using NOR operator: "<< ( !hasId ) << endl;
	
	return 0;
	
}
