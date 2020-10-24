#include <iostream> 
using namespace std; 

string cesar(string text, int s) 
{ 
    string result = ""; 
      for (int i=0;i<text.length();i++) 
    { 
        if (isupper(text[i])) 
            result += char(int(text[i]+s-65)%26 +65); 
      else
        result += char(int(text[i]+s-97)%26 +97); 
    } 
  
    return result; 
} 
  int main() 
{ 
    string text="SADIK KAPLAN"; 
    int s = 25; 
    cout << "Metin : " << text; 
    cout << "\nShift: " << s; 
    cout << "\nSifreli Metin: " << cesar(text, s); 
    return 0; 
} 
