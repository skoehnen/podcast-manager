// system includes
#include <curl/curl.h>
#include <iostream>

int main( ) {

  CURL* curl;

  // Initialize curl
  curl = curl_easy_init();

  // Check if curl initialized correctly
  if( curl ) {
    
  } else {
    std::cerr << "Curl init error" << std::endl;
  }
  
  return 0;
}
