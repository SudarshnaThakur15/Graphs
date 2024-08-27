def chatbot():
    print("Hello! I'm your friendly chatbot. How can I assist you today?")
    
    while True:
     
        user_input = input("You: ").strip().lower()
        
        if "hello" in user_input or "hi" in user_input:
            print("Chatbot: Hello! How are you?")
        elif "how are you" in user_input:
            print("Chatbot: I'm just a bunch of code, but I'm here to help you!")
        elif "what is your name" in user_input:
            print("Chatbot: I'm a simple chatbot created in Python.")
        elif "bye" in user_input or "exit" in user_input:
            print("Chatbot: Goodbye! Have a great day!")
            break
        else:
            print("Chatbot: I'm not sure how to respond to that. Could you ask something else?")


chatbot()
