/* Name: Jigarkumar Pritamkumar Koradiya
Email: jpkoradiya@myseneca.ca
Seneca Id: 164861189
Date: 27/10/2020

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef SDDS_MOVIE_H
#define SDDS_MOVIE_H
#include<string>

namespace sdds {
	class Movie{
		std::string m_title{ "" };
		int m_release{ 0 };
		std::string m_desc{ "" };
		std::string trim(std::string& str);
	public:
		Movie() {};
		const std::string& title() const;
		Movie(const std::string& strMovie);
		template<typename T>
		void fixSpelling(T spellChecker) {
			spellChecker(m_desc);
			spellChecker(m_title);
		}
		//std::ostream& operator()(std::string) {

		//};
		friend std::ostream& operator<<(std::ostream&, const Movie&);
	};
}


#endif //!SDDS_MOVIE_H