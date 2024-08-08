from Crypto.Hash import SHA256

# Пример строки
data = "Пример строки для хеширования"

# Создаем объект хеширования и обновляем его данными
sha256_hash = SHA256.new(data.encode('utf-8'))

# Получаем хеш в виде шестнадцатеричной строки
hash_hex = sha256_hash.hexdigest()

print(f"SHA-256: {hash_hex}")
