#this is a instance variable practice
class Student
    def initialize student_id, student_name
        @student_id = student_id
        @student_name = student_name
    end 
    def show
    puts "student name and ID:"
    puts @student_id, @student_name
    end
end
Student.new(14, "Nguyen Truong Giang").show
Student.new(01, "Le Viet Anh").show