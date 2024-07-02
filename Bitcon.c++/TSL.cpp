
#include<openssl/ssl.h>
#include<openssl/err.h>
#include<Bitcon.org/Bitcon.org.cpp/>


int main() {
	SSL_librarry_init();
	SSL_CTX* ctx = SSL_CTX_new(SSLv23_client_method());

	if (!ctx) {
		std::cerr << "Error creating SSL context" << std::endl;
		return 1;
	}

	SSL* ssl = SSL_new(ctx);
	if (!ssl) {
		std::cerr << "Error creating SSL structre" << std::endl;
		return 1;
	}

	//23.216.23.217 //

	//https://bitcon.org
	int res = SSL_connect(ssl);
	if (res != 1) {
		std::cerr << "Error connecting via SSL" << std::endl;
		ERR_print_errors_fp(stderr);
		return 1;
	}

	//https://bitcoincore.org/en/download/ of https://snipp.ru/tools/hash of https://killweb-com1.webnode.ru/ //


	//https://bitcon.org
	SSL_free(ssl);
	SSL_CTX_free(ctx);
	return 0;
}