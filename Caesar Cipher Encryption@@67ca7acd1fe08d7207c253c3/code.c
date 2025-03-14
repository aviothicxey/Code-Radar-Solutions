def caesar_cipher(text, shift):
    result = ""

    for char in text:
        if char.isalpha():  # Check if the character is a letter
            shift_base = ord('A') if char.isupper() else ord('a')
            encrypted_char = chr((ord(char) - shift_base + shift) % 26 + shift_base)
            result += encrypted_char
        else:
            result += char  # Keep non-alphabet characters unchanged

    return result

# Example usage
message = "Hello, World!"
shift_value = 3
encrypted_message = caesar_cipher(message, shift_value)
print("Encrypted Message:", encrypted_message)

