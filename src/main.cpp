#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
#include<memory>
#include<queue>

using namespace std;

namespace Util{
    /** @brief The array of the strings. */
    using StrVec = std::vector<std::string>;

    /**
     * @brief Separate the strings.
     * @param text The string you want to separate.
     * @param delim The delim string. ( def: " " )
     * @return The object of the std::Vector for std::string, which was separated.
    */
    StrVec split( const std::string& text, const std::string& delim = std::string(" ") ){
        StrVec res;
        int end = 0, begin = 0, n = 0;
        while( true ){
            end   = text.find( delim, begin );
            if( end == std::string::npos ){
                res.push_back( text.substr( begin, (text.size() - begin) ) );
                break;
            }
            n = (end - begin);
            res.push_back( text.substr( begin, n ) );
            begin = end + 1;
        }
    return res;
    }

    /**
     * @brief Convert the data to the string.
     * @param val The data you want to convert.
     * @return The string which was converted from the data.
     */
    template<typename T> std::string ToString( T val ){
        std::stringstream ss;
        ss << val << flush;
    return ss.str();
    }
}



int main( int argc, char** argv ){
    int n;
    cin >> n;

    std::string s;
    cin >> s;

    // 3≦|S|≦20
    if( s.size() < 3 || s.size() > 20 ){ return -1; }

    std::queue<char> all_queue;
    for( int i = 0; i < static_cast<int>(s.size()); i++ ){
        all_queue.push( static_cast<char>(s[i]) );
    }

    std::queue<char> transfered_queue;
    for( int i = 0; i < n; i++ ){
        transfered_queue.push( static_cast<char>(all_queue.front()) );
        all_queue.pop();
    }

    while( !all_queue.empty() ){
        cout << static_cast<char>(all_queue.front()) << flush;
        all_queue.pop();
    }

    while( !transfered_queue.empty() ){
        cout << static_cast<char>(transfered_queue.front()) << flush;
        transfered_queue.pop();
    }

    cout << endl;
return 0;
}
