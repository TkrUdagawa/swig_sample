public class Main {
  static {
    System.loadLibrary("vec_sample");
  }
  public static void main(String[] args) {
      DVec v = new DVec();
      v.add(1.0);
      HogeVec hv = new HogeVec();
      Hoge h = new Hoge();
      CMap m = h.get_map();
      System.out.println(m.get("fugafuga"));
      CVecVec cvecvec = h.get_vecvec();
      System.out.println("vecvec");
      System.out.println(cvecvec.get(0).get(0));
      h.print_x();
      hv.add(h);
      System.out.println(hv.size());
      vec_sample.init(v);
      vec_sample.twice(v);
      System.out.println(v.get(0));
  }
}
