def simple_chatbot():
    print("Hello! I'm a simple chatbot. What's your name?")
    name = input("Enter your name: ")
    print(f"Nice to meet you, {name}!")

    while True:
        user_input = input("You: ")

        if user_input.lower() == 'bye':
            print("Chatbot: Goodbye!")
            break
        else:
            # You can customize the responses based on user input here
            print("Chatbot: That's interesting!")

if __name__ == "__main__":
    simple_chatbot()
