class Strings_Methods {
  public static void main(String[] args) {
    // String a1 = new String("suman");

    String name = "Suman Malakar";

    // System.out.println(name);

    // int value = name.length();
    // String lString = name.toLowerCase();
    // String uString = name.toUpperCase();

    // String nonTrimmedString = " suman ";
    // System.out.println(nonTrimmedString);
    // String trimmedString = nonTrimmedString.trim();
    // System.out.println(trimmedString);

    // System.out.println(name.substring(2));
    // System.out.println(name.substring(1,4));
    
    // System.out.println(name.replace('a','@'));
    // System.out.println(name.replace("Su", "A"));

    // System.out.println(name.startsWith("S"));
    // System.out.println(name.endsWith("mar"));

    // System.out.println(name.charAt(1));
  
    String modifiedName = "Harryrryrry";

    // System.out.println(modifiedName.indexOf("M"));
    System.out.println(modifiedName.indexOf("rry",4));

    System.out.println(modifiedName.lastIndexOf("rry", 7));

    System.out.println(name.equals("Suman Malakar"));

    System.out.println(name.equalsIgnoreCase("suman malakar"));



  }
}