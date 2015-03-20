#include <curl/curl.h>

int main( ) {

  CURL* curl;

  // Initialize curl
  curl = curl_easy_init();

  // Check if curl initialized correctly
  if( curl ) {
    
  } else {
  }
  
  return 0;
}
