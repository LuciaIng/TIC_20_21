package MiCodigo;

public class ParejaNumeros {
	//Aquí van los atributos
	private double num1;
	private double num2;
	
	//El constructor
	public ParejaNumeros(double centro_x, double centro_y){
		this.num1=centro_x;
		this.num2=centro_y;
		
	}
		
	
	//Resto de métodos
	public double devuelveSuma(){
		return (num1+num2);
		
	}
	public double devuleveResta(){
		return (num1-num2);
			
	}
	public double devuelveMultiplicacion(){
		return(num1*num2);
		
	}
	public double devuelveDivision() {
		double division;
		division=num1/num2;
		return(division);
		
	}
	//Metodos getters y setters
	/**
	 * @return the num1
	 */
	public double getNum1() {
		return num1;
	}

	/**
	 * @param num1 the num1 to set
	 */
	public void setNum1(int num1) {
		this.num1 = num1;
	}


	/**
	 * @return the num2
	 */
	public double getNum2() {
		return num2;
	}


	/**
	 * @param num2 the num2 to set
	 */
	public void setNum2(double num2) {
		this.num2 = num2;
	}


	/**
	 * @param num1 the num1 to set
	 */
	public void setNum1(double num1) {
		this.num1 = num1;
	}

	

	



}
