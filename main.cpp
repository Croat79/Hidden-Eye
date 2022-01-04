#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cmath>

void show_progress_bar(int time, const std::string &message, char symbol);

int main()
{

    show_progress_bar(100, "Loading Modules ...", '#');

    std::cout << "\033[1;31m"
              << R"(

 ██░ ██  ██ ▓█████▄ ▓█████▄ ▓█████  ███▄    █    ▓█████ ██   ██ ▓█████ 
▓██░ ██ ▓██ ▒██▀ ██▌▒██▀ ██▌▓█   ▀  ██ ▀█   █    ▓█   ▀ ▒██  ██ ▓█   ▀ 
▒██▀▀██ ▒██ ░██   █▌░██   █▌▒███   ▓██  ▀█ ██▒   ▒███    ▒██ ██ ▒███   
░▓█ ░██ ░██ ░▓█▄   ▌░▓█▄   ▌▒▓█  ▄ ▓██▒  ▐▌██▒   ▒▓█  ▄  ░ ▐██▓▒▓█  ▄ 
░▓█▒░██▓ ██ ░▒████▓ ░▒████▓ ░▒████▒▒██░   ▓██░   ░▒████▒ ░ ██▒▓░░▒████▒
 ▒ ░░▒░▒░▓   ▒▒▓  ▒  ▒▒▓  ▒ ░░ ▒░ ░░ ▒░   ▒ ▒    ░░ ▒░ ░  ██▒▒▒ ░░ ▒░ ░
 ▒ ░▒░ ░ ▒ ░ ░ ▒  ▒  ░ ▒  ▒  ░ ░  ░░ ░░   ░ ▒░    ░ ░  ░▓██ ░▒░  ░ ░  ░
 ░  ░░ ░ ▒ ░ ░ ░  ░  ░ ░  ░    ░      ░   ░ ░       ░   ▒ ▒ ░░     ░   
 ░  ░  ░ ░     ░       ░       ░  ░         ░       ░  ░░ ░        ░  ░
             ░       ░                                  ░ ░            
       
)";

    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " v 1.0.0"
              << "\033[1;31m"
              << " ]"
              << "\033[1;31m"
              << "\t\t["
              << "\033[1;37m"
              << " by Muhammad Qazi"
              << "\033[1;31m"
              << " ]"
              << "\033[1;31m"
              << "\t\t[ "
              << "\033[1;37m"
              << "github.com/muhammadqazi"
              << "\033[1;31m"
              << " ]\n\n";

    std::cout << "\n\033[1;31m"
              << "[ "
              << "\033[1;34m"
              << "Modern Phishing Tool With Advanced Functionality"
              << "\033[1;31m"
              << " ]\n";
    std::cout << "\033[1;31m"
              << "[ "
              << "\033[1;34m"
              << "Phising , keylogger , Information Collector , All in one Social Engineering Tool"
              << "\033[1;31m"
              << " ]\n\n";

    std::cout << "\033[1;31m"
              << "--------------------------------------------------------------------------------------------------\n\n";
    std::cout << "\033[1;31m"
              << "Phising Modules:\n\n";

    //1) Facebook
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 01"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Facebook\t\t";

    //2) Google
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 02"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Google\t\t";

    //3) LinkedIn
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 03"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " LinkedIn\n\n";

    //4) Github
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 04"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Github\t\t";

    //5) Stack Overflow
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 05"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " StackOverflow\t";

    //6) WordPress
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 06"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " WordPress\n\n";

    //7) Instagram
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 07"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Instagram\t";

    //8) Twitter
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 08"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Twitter\t\t";

    //9) Snapchat
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 09"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Snapchat\n\n";

    //10) Yahoo
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 10"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Yahoo\t\t";

    //11) Twitch
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 11"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Twitch\t\t";

    //12) Microsoft
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 12"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Microsoft\n\n";

    //13) Steam
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 13"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Steam\t\t";

    //14) iCloud
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 14"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " iCloud\t\t";

    //15) GitLab
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 15"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " GitLab\n\n";

    //16) Netflix
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 16"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Netflix\t\t";

    //17) Pinterest
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 17"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Pinterest\t";

    //18) Origin
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 18"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Origin\n\n";

    //19) ProtoMail
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 19"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " ProtoMail\t";

    //20) Spotify
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 20"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Spotify\t\t";

    //21) Quora
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 21"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Quora\n\n";

    //22) Adobe
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 22"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Adobe\t\t";

    //23) Cryptocurrency
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 23"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Cryptocurrency\t";

    //24) DevianArt
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 24"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " DevianArt\n\n";

    //25) Dropbox
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 25"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Dropbox\t\t";

    //26) eBay
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 26"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " eBay\t\t";

    //27) PayPal
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 27"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " PayPal\n\n";

    //28) Shopify
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 28"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Shopify\t\t";

    //29) Verizon
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 29"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Verizon\t\t";

    //30) Reddit
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 30"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Reddit\n\n";

    //31) PlayStation
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 31"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " PlayStation\t";

    //32) Xbox
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 32"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Xbox\t\t";

    //33) Custom
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 33"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Custom(1)\n\n";

    std::cout << "\033[1;31m"
              << "Additional Tools:\n\n";

    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " 0A"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Get Target Location\n\n";

    return 0;
}

void show_progress_bar(int time, const std::string &message, char symbol)
{
    std::string progress_bar;
    const double progress_level = 1.42;

    std::cout << "\n\033[1;31m" << message << "\n\n";

    for (double percentage = 0; percentage <= 100; percentage += progress_level)
    {
        progress_bar.insert(0, 1, symbol);
        std::cout << "\033[1;31m" << "\r [ " << "\033[1;37m" << std::ceil(percentage) << '%' << "\033[1;31m"<< " ] " << progress_bar;
        std::this_thread::sleep_for(std::chrono::milliseconds(time));
    }
    std::cout << "\n\n";
}