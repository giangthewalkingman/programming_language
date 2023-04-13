class Car 
    @@the_number_of_cars = 10
    def car_tires
        @the_number_of_tires = 4
        puts "the number of windows is #{@the_number_of_windows}\n " + "the number of tires is #{@the_number_of_tires} " 
        puts (@@the_number_of_cars)
    end
    def car_windows
        @the_number_of_windows = 6
        puts "the number of windows is #{@the_number_of_windows}\n " + "the number of tires is #{@the_number_of_tires} " 
    end
end
Car.new.car_tires
Car.new.car_windows
puts "the number of windows is #{@the_number_of_windows}\n " + "the number of tires is #{@the_number_of_tires} " 
#this_definitely_a_comment_:)

Const_1 = 24
puts "#{Const_1} "
