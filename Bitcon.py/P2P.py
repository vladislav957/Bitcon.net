import socket

# �������� ����������� ������
client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

def connect_to_server(client):
    try:
        client.connect(("127.0.0.1", 54000))
        print("Connected to server")
    except ConnectionError as e:
        print(f"Connection error: {e}")

def receive_message(client):
    try:
        response = client.recv(4096)
        print(f"Server: {response.decode('utf-8')}")
    except Exception as e:
        print(f"Error receiving data: {e}")

def main():
    connect_to_server(client)
    receive_message(client)
    client.close()

if name == "main":
    main()



