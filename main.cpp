// system includes
#include <curl/curl.h>
#include <iostream>
#include <fstream>

int main( ) {

  CURL* curl;
  CURLcode response;

  std::ifstream urlFile( "url" );
  
  // Initialize curl
  curl = curl_easy_init();

  // Check if curl initialized correctly
  if( curl ) {

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdisabled-macro-expansion"
    
    curl_easy_setopt( curl, CURLOPT_URL, "" );

#pragma clang diagnostic pop
    
    response = curl_easy_perform( curl );

    curl_easy_cleanup( curl );
    
  } else {
    std::cerr << "Curl init error" << std::endl;
  }
  
  return 0;
}
