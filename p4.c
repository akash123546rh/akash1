def calculate_gross_salary(basic, grade):
    # Calculate HRA, DA, Allow, and PF
    hra = 0.20 * basic
    da = 0.50 * basic
    
    if grade == 'A':
        allow = 1700
    elif grade == 'B':
        allow = 1500
    elif grade == 'C':
        allow = 1300
    else:
        allow = 0
    
    pf = 0.11 * basic
    
    # Calculate gross salary
    gross_salary = basic + hra + da + allow - pf
    return gross_salary

# Test cases
basic_A = 10000
grade_A = 'A'
gross_salary_A = calculate_gross_salary(basic_A, grade_A)
print(f"Gross Salary for Grade A: {gross_salary_A}")

basic_B = 4567
grade_B = 'B'
gross_salary_B = calculate_gross_salary(basic_B, grade_B)
print(f"Gross Salary for Grade B: {gross_salary_B}")

