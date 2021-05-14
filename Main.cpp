#include <iostream>
#include <vector>
#include <string>
class Song 
{
private:
	enum data {
		A, B, C,
	};
	std::string song_name,album_name;
	int song_duration=0;
	std::vector< std::string> Vocalists;
	std::vector< std::string> Arrangers;
	std::vector< std::string> Circles;
public:
	
	void add_vocalist(const std::string& name)
	{
		Vocalists.push_back(name);
	}
	void print_category(const std::vector<std::string>& vec)
	{
		if (vec.size()==0) {
			std::cout << "The chosen category has no size";
		}
		else 
		{
			std::cout << "The category has "<< vec.size() << " members: ";
			for (int i = 0;i < vec.size();i++) {
				if (i == (vec.size() - 1)) {
					std::cout << "and " << vec[i];
				}
				else {
					std::cout << vec[i] << ",";
				}
			}
			
		}	
		std::cout << std::endl;
	}
	
	std::vector<std::string> get_vocalists()
	{
		return Vocalists;
	}
	std::vector<std::string> get_arrangers()
	{
		return Arrangers;

	}
	std::vector<std::string> get_circles()
	{
		return Circles;
	}
};

class Circles
{
private:
	std::string circle_name;
};

class Arranger
{
private:
	std::string arranger_name;
};

int main()
{
	Song pierro;
	pierro.add_vocalist("Nagi");
	pierro.add_vocalist("Tki");
	pierro.add_vocalist("Sorane");
	pierro.add_vocalist("3L");
	pierro.print_category(pierro.get_vocalists());
	std::cin.get();
}