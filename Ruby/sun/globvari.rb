$global = 6
class C
    puts "the number is #{$global} "
    def my_method
        puts "i said the number is #{$global} "
        $global = $global + 1
        $other_global = $global +2
    end
end

C.new.my_method

puts "$global = #{$global} \n" + "$other_global = #{$other_global} "
