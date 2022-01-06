#include <iostream>
#include <limits>
#include <string>
#include <thread>
#include <chrono>
#include <cmath>
using namespace std;

void show_progress_bar(int time, const std::string &message, char symbol);
int Validator(int option, int startLimit, int endLimit);
void Facebook(int option, bool validate);
int main()
{

    int option;
    bool validate = true;

    show_progress_bar(100, "Loading Hidden-Eye ...", '#');
    system("clear");
    do
    {
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
                  << "https://github.com/muhammadqazi"
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
        // 34) Location
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 34"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Get Target Location\n\n";

        if (!validate)
        {
            std::cout << "\033[1;31m"
                         "Enter the correct option\n"
                      << endl;
        }

        std::cout << "\033[1;31m"
                  << "HiddenEye >> "
                  << "\033[1;37m";
        std::cin >> option;

        validate = Validator(option, 1, 34);

        if (validate)
        {
            system("clear");

            //1) Facebook
            if (option == 1)
            {
                Facebook(option, validate);
            }
        }

    } while (!validate);

    return 0;
}
int Validator(int option, int startLimit, int endLimit)
{
    if ((option <= startLimit || option <= endLimit) && (option != 0))
    {
        return true;
    }
    else
    {
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
}
void show_progress_bar(int time, const std::string &message, char symbol)
{
    std::string progress_bar;
    const double progress_level = 1.42;

    std::cout << "\n\033[1;31m" << message << "\n\n";

    for (double percentage = 0; percentage <= 100; percentage += progress_level)
    {
        progress_bar.insert(0, 1, symbol);
        std::cout << "\033[1;31m"
                  << "\r [ "
                  << "\033[1;37m" << std::ceil(percentage) << '%' << "\033[1;31m"
                  << " ] " << progress_bar;
        std::this_thread::sleep_for(std::chrono::milliseconds(time));
    }
    std::cout << "\n\n";
}
void Facebook(int option, bool validate)
{
    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " *"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Facebook Phishing is loaded\n\n";

    std::cout << "\033[1;31m"
              << "["
              << "\033[1;37m"
              << " *"
              << "\033[1;31m"
              << " ]"
              << "\033[1;37m"
              << " Select Mode\n\n";

    std::cout << "\033[1;31m"
              << "--------------------------------------------------------------------------------------------------\n\n";

    std::cout << "\033[1;31m"
              << "Operation Mode:\n\n";
    do
    {
        //1) Standard
        std::cout << "\n\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 01"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Standard Phising Page\t\t";
        //2) Fake Security
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 02"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Fake Security\n\n";
        //3) Poll Ranking
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 03"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Poll Ranking Method\t\t";
        //4) Poll Mesenger Credentials
        std::cout << "\033[1;31m"
                  << "["
                  << "\033[1;37m"
                  << " 04"
                  << "\033[1;31m"
                  << " ]"
                  << "\033[1;37m"
                  << " Poll Messenger Credentials\n\n";

        if (!validate)
        {
            std::cout << "\033[1;31m"
                         "Enter the correct option\n\n"
                      << endl;
        }

        std::cout << "\033[1;31m"
                  << "HiddenEye >> "
                  << "\033[1;37m";
        std::cin >> option;

        validate = Validator(option, 1, 4);

        if (validate)
        {
            system("clear");

            //1) Standard Phising Page
            if (option == 1)
            {
                std::cout << "\033[1;31m"
                          << R"(
 _  _  __  ____  ____  ____  __ _       ____  _  _  ____ 
/ )( \(  )(    \(    \(  __)(  ( \     (  __)( \/ )(  __)
) __ ( )(  ) D ( ) D ( ) _) /    /      ) _)  )  /  ) _)    by Muhammad Qazi
\_)(_/(__)(____/(____/(____)\_)__)     (____)(__/  (____)

                          https://github.com/muhammadqazi
            )" << endl;

                std::cout << "\n\033[1;31m"
                          << "[ "
                          << "\033[1;34m"
                          << "Prompt : Chose Features you would like to chose"
                          << "\033[1;31m"
                          << " ]\n\n";

                std::cout << "\033[1;31m"
                          << "--------------------------------------------------------------------------------------------------\n\n";
                std::cout << "\033[1;31m"
                          << "Operation Mode:\n\n";
                do
                {
                    //1) Keylogger
                    std::cout << "\n\033[1;31m"
                              << "["
                              << "\033[1;37m"
                              << " 01"
                              << "\033[1;31m"
                              << " ]"
                              << "\033[1;37m"
                              << " Keylogger\n\n";
                    //2) Fake CloudFare Protection Page
                    std::cout << "\033[1;31m"
                              << "["
                              << "\033[1;37m"
                              << " 02"
                              << "\033[1;31m"
                              << " ]"
                              << "\033[1;37m"
                              << " Fake CloudFare Protection Page\n\n";
                    //3) Capture Data Email
                    std::cout << "\033[1;31m"
                              << "["
                              << "\033[1;37m"
                              << " 03"
                              << "\033[1;31m"
                              << " ]"
                              << "\033[1;37m"
                              << " Capture Data Email\n\n";

                    if (!validate)
                    {
                        std::cout << "\033[1;31m"
                                     "Enter the correct option\n\n"
                                  << endl;
                    }

                    std::cout << "\033[1;31m"
                              << "HiddenEye >> "
                              << "\033[1;37m";
                    std::cin >> option;

                    validate = Validator(option, 1, 3);

                    if (validate)
                    {
                        system("clear");

                        //1) Keylogger
                        if (option == 1)
                        {
                            std::cout << option;
                        }
                        //2) Fake CloudFare Protection Page
                        else if (option == 2)
                        {
                            show_progress_bar(100, "Loading Fake CloudFare Modules ...", '*');

                        }
                        //3) Capture Data Email
                        else if (option == 3)
                        {
                            std::cout << option;
                        }
                    }

                } while (!validate);
            }
            //2) Fake Security
            else if (option == 2)
            {
                std::cout << option;
            }
            //3) Poll Ranking
            else if (option == 3)
            {
                std::cout << option;
            }
            //4) Poll Mesenger Credentials
            else if (option == 4)
            {
                std::cout << option;
            }
        }

    } while (!validate);
}