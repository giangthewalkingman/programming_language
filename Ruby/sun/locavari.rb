color = "red"
def method1
    color = 192
    puts("color in method 1 is: ", color)
end
def method2
    color = 205
    puts("color in method 2 is: ",color)
end
method1
method2
method1 #to do what?
puts("color value outside methods: " + color)