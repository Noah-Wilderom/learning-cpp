

/*
Deoxyribonucleic acid (DNA) is a chemical found in the nucleus of cells and carries the "instructions" for the development and functioning of living organisms.

If you want to know more: http://en.wikipedia.org/wiki/DNA

In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G". Your function receives one side of the DNA (string, except for Haskell); you need to return the other complementary side. DNA strand is never empty or there is no DNA at all (again, except for Haskell).

More similar exercise are found here: http://rosalind.info/problems/list-view/ (source)

Example: (input --> output)
"ATTGC" --> "TAACG"
"GTAT" --> "CATA"

*/

#include <iostream>
#include <string>

std::string DNAStrand(std::string dna);

int main()
{
	std::cout << DNAStrand("AAAA") << std::endl;
	std::cout << DNAStrand("GTAT") << std::endl;
	std::cout << DNAStrand("ATTGC") << std::endl;
}


std::string DNAStrand(std::string dna)
{

  for(int i = 0; i < dna.length(); i++)
  {
    
  	dna[i] = dna[i] == 'A' ? 'T' : dna[i] == 'T' ? 'A' : dna[i];
	dna[i] = dna[i] == 'C' ? 'G' : dna[i] == 'G' ? 'C' : dna[i];
	
  }
  return dna;
}
