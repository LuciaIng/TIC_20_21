package MiCodigo;

public class Circulo {
	private double radio;
	private double centro_x;
	private double centro_y;
	public Circulo(double radio,double centro_x, double centro_y) {
		this.setRadio(radio);
		this.centro_x=centro_x;
		this.centro_y=centro_y;
		
	}
	double devuelveArea(){
		double area;
		area=(double) (Math.PI*getRadio()*getRadio());
		return (area);
		
	}
	public double getRadio() {
		return radio;
	}
	public void setRadio(double radio) {
		this.radio = radio;
	}
}