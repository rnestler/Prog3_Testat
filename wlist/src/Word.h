#ifndef WORD_H_
#define WORD_H_

#include <string>
#include <algorithm>
#include <iostream>
#include <iterator>


class Word {
public:
	std::string getWord() const
		{return m_Word;};
	void read(std::istream& in);
private:
	std::string m_Word;
};

inline std::istream& operator>>(std::istream& in, Word & w){
	w.read(in);
	return in;
}

inline std::ostream& operator<<(std::ostream& out, Word const& w){
	out << w.getWord();
	return out;
}

#endif /* WORD_H_ */