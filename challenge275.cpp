#include <iostream>
#include <string>
using namespace std;

/*
1. All chemical symbols must be exactly two letters, so B is not a valid symbol for Boron.
2. Both letters in the symbol must appear in the element name, but the first letter of the element name does not necessarily need to appear in the symbol. So Hg is not valid for Mercury, but Cy is.
3. The two letters must appear in order in the element name. So Vr is valid for Silver, but Rv is not. To be clear, both Ma and Am are valid for Magnesium, because there is both an a that appears after an m, and an m that appears after an a.
4. If the two letters in the symbol are the same, it must appear twice in the element name. So Nn is valid for Xenon, but Xx and Oo are not.
*/

// proto type and such the function
bool isValidElementSymbol(string, string);

int main(){
	string elementName;
	string elementSymbol;


	cout << "enter the name of the element: ";
	elementName = cin.get();

	cout << endl << "enter the proposed symbol: " << endl;
	elementSymbol = cin.get();

	if (isValidElementSymbol(elementName, elementSymbol)){
		cout << "That'll do donkey" << endl;
	}
	else{
		cout << "Nope try again";
	}
	return 0;
}

bool isValidElementSymbol(string EName, string ESymbol)
{
	bool SymIsTwoLetters, LettersInElementName, inOrder, CorrectlyCounted;

	if (ESymbol.length() == int(2)){
		SymIsTwoLetters = true;
	}
	for (int i = EName.length(); i >= 0; i--){
		if (ESymbol[0] != EName[i] && ESymbol[1] != EName[i]) {
			LettersInElementName = false;
		}
		else {
			LettersInElementName = true;
		}
	}
	if (SymIsTwoLetters && LettersInElementName && inOrder && CorrectlyCounted) {
		return true;
	}
	else
		return false;
}