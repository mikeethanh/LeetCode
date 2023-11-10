def averageSalary(salary):
    # Handle the case when the length of the salary list is less than 3
    if len(salary) < 3:
        return 0

    # Exclude the minimum and maximum salary
    # sum là một hàm tích hợp sẵn trong Python, được sử dụng để tính tổng của các phần tử trong một iterable (ví dụ: danh sách, tuple, hoặc iterator).
    sum_salary = sum(salary) - min(salary) - max(salary)
    count = len(salary) - 2

    # Calculate the average
    if count != 0:
        res = sum_salary / count
        return float(res)
    else:
        return 0.0  # Trường hợp đặc biệt khi mảng rỗng để tránh lỗi chia cho 0

# Example usage
salary = [4000, 3000, 1000, 2000]
print(averageSalary(salary))
