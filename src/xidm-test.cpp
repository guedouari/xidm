//============================================================================
// Name        : xidm-test.cpp
// Author      : guedouari
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cstdio>
#include <cstdlib>

#include "./libs/jsonrpc/jsonrpc.h"
#include "xidm/Aria2Man.h"

/**
 * \brief Entry point of the program.
 * \param argc number of argument
 * \param argv array of arguments
 * \return EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int argc, char** argv)
{
  Json::Rpc::HttpClient httpClient(std::string("http://localhost/jsonrpc"),6800);
  Json::Value query;
  Json::FastWriter writer;
  std::string queryStr;
  std::string responseStr;

  /* avoid compilation warnings */
  /*argc = argc;
  argv = argv;*/

  if(!networking::init())
  {
    std::cerr << "Networking initialization failed  " << std::endl;
    exit(EXIT_FAILURE);
  }

  if(!httpClient.Connect())
  {
    std::cerr << "Cannot connect to remote peer!" << std::endl;
    exit(EXIT_FAILURE);
  }

  /* build JSON-RPC query */
  std::cout << "################## args " << argc << std::endl;


  if(argc==2)queryStr=Aria2::Aria2Man().Aria2Add(argv[1]);
  if(argc==3){
	  queryStr=Aria2::Aria2Man().Aria2Add(argv[1],argv[2]);
	  std::cout << "################## args ";
  }
  std::cout << "Query is: " << queryStr << std::endl;

  if(httpClient.Send(queryStr) == -1)
  {
    std::cerr << "Error while sending data!" << std::endl;
    exit(EXIT_FAILURE);
  }

  /* wait the response */
  if(httpClient.Recv(responseStr) != -1)
  {
    std::cout << "Received: " << responseStr << std::endl;
  }
  else
  {
    std::cerr << "Error while receiving data!" << std::endl;
  }

  httpClient.Close();
  networking::cleanup();

  return EXIT_SUCCESS;
}

