#include"cStack.cpp"
int main()
{
	cStack <string>s1;
	s1.Push("Tuka");
	s1.Push("Abhi");
	s1.Push("Sumit");
	s1.Push("Gauri");
	s1.Push("Shweta");
	//s1.Display();
	s1.Push("Ankit");
	s1.Push("Sagar"); 
	s1.Display();
	cout << "\n\n\n";
	s1.POP();
	s1.POP();
	s1.POP();
	s1.Display();
	cout << "\n\n\n";
	s1.Push("Sweety");
	s1.Push("Akashay");
	s1.Push("Khushal");
	s1.Push("Kavita");
	s1.Display();
	cout << "\n\n\n";
	s1.POP();
	s1.POP();
	s1.POP();
	s1.POP();
	s1.POP();
	s1.POP();
	s1.Display();
	cout << "\n\n\n";
	s1.POP();
	s1.POP();
	s1.Display();
	cout << "\n\n\n";
	s1.POP();
}