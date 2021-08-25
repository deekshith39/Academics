package evenNumbers

object evenNumbers {
  def main(args: Array[String]){
    val tests = List.range(1,15)
    println("Even numbers between 1-15")
    for(n <- tests){
      if(n % 2 == 0)
        print(n + " ")
    }
    
  }
}