public class Main {
  static {
    System.loadLibrary("vec_sample");
  }
  public static void main(String[] args) {
      DVec v = new DVec();
      vec_sample.init(v);
      vec_sample.twice(v);
  }
}
