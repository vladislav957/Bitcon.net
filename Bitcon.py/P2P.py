class my_class(object):
    pass

# Client

import socket

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
def new_func(client):
    client.connect(("127.0.0.1", 54000))

new_func(client)

new_varnew_var = response = client.recv(4096)

print(f"Server: {response.decode('utf-8')}")

client.close()



