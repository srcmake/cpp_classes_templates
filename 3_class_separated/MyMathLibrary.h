// Copyright srcmake.com 2018.
// We have to include the using namespace std in this file only because we have endl in this file.
using namespace std;

// We must include the entire class "blueprint" in this header file. 
class MyMathClass
	{
	private:
		int favoritenumber;
	public:
		MyMathClass();
		MyMathClass(int);
		void SetFavoriteNumber(int);
		int Add(int, int);
		
		/* Since we wrote the function definition inside of the class 
		(as opposed to prototyping it, like the others), we must 
		keep it defined in the header file. This is poor programming.
		Always keep your class definition as minimal as possible, and 
		define the functions outside of it. */
		void PrintFavoriteNumber()
			{
			cout << "The favorite number is " << favoritenumber << endl;
			}
	};
