void Forward( float th1, float th2, float th3,  float l1, float l2,
	 glm::mat4& m1g, glm::mat4& m2g, glm::mat4& m3g )
{

	//Possisioning Part 1 with respect to the ground
	m1g = glm::rotate(m1g, th1, glm::vec3(0, 0, 1));												//rotate by th1 on the Z axis


	//Possisioning Part 2 with respect to the ground
	glm::mat4 m21;
	m21 = glm::translate(glm::mat4(1.f), glm::vec3(l1, 0, 0));			 				//translate by l1
	m21 = glm::rotate(m21, th2, glm::vec3(0, 0, 1));												//rotate by th2 on the Z axis
	m2g = m1g * m21;																												//Multiply m1g to m21


	//Possisioning Part 3 with respect to the ground
	glm::mat4 m32;
	m32 = glm::translate(glm::mat4(1.f), glm::vec3(l2, 0, 0));							//translate by l2
	m32 = glm::rotate(m32, th3, glm::vec3(0, 0, 1));												//rotate by th3 on the Z axis
	m3g = m2g * m32;																												//Multiply m2g to m32

}

void WhoAmI( std::string &yourName, std::string &yourEmailAddress )
{
        yourName = "Andrew Snow";
        yourEmailAddress = "snowan@oregonstate.edu" ;
}
