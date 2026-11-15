import copy 

class Book:
    def __init__(self, title, author, year):
        self.title = title
        self.author = authorcd
        self.year = year

    def __str__(self):
        return f"{self.title} by {self.author} ({self.year})"

    def clone(self):
        return copy.deepcopy(self)

    def print(self):
        print(self)

b1 = Book("1984", "George Orwell", 1949)
b2 = b1.clone()
b1.print()
b2.print()

