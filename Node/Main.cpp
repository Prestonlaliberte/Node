#include "List.h"

int main(){
	List ll;
	ll.push_front(5);
	ll.push_front(8);
	ll.push_front(10);
	//cout << ll << endl;
	//ll.pop_front();
	//cout << "After calling pop_front " << ll << endl;
	List mm;
	mm.push_front(12);
	mm = ll;
	cout << "after mm = ll\n";
	cout << mm << endl;
	//int target;
	//cout << "Enter target: ";
	//cin >> target;
	//Node* np = ll.find(target);
	//if(np){
	//	cout << target << " is in the list\n";
	//}else{
	//	cout << target << " is not in the list\n";
	//}
	//cout << "List is " << ll;
	return 0;
}