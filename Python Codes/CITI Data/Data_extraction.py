from fpdf import FPDF
from PIL import Image, ImageDraw

# Create a placeholder logo
logo = Image.new("RGB", (100, 100), color="white")
draw = ImageDraw.Draw(logo)
draw.ellipse((25, 25, 75, 75), fill="blue")
logo_path = "logo.png"
logo.save(logo_path)

# PDF class
class ReceiptPDF(FPDF):
    def header(self):
        self.set_font("Arial", "B", 16)
        self.set_text_color(0, 102, 204)
        self.cell(0, 10, "Shop Name Receipt", ln=True, align="C")

    def add_logo(self, logo_path):
        self.image(logo_path, 10, 10, 30)

    def add_table(self, data, col_widths, colors, tick_rows):
        self.set_font("Arial", "", 12)
        line_height = 10
        tick_mark = "v"  # Use 'v' instead of Unicode tick for compatibility

        for i, row in enumerate(data):
            for j, item in enumerate(row):
                r, g, b = colors[i]
                self.set_fill_color(r, g, b)
                if i in tick_rows and j == 0:
                    item = f"{tick_mark} {item}"
                self.cell(col_widths[j], line_height, item, border=1, fill=True)
            self.ln(line_height)

# Sample table data
columns = ["Item", "Quantity", "Price", "Total"]
rows = [
    ["Apple", "2", "$1.00", "$2.00"],
    ["Banana", "5", "$0.50", "$2.50"],
    ["Orange", "3", "$0.75", "$2.25"],
    ["Milk", "1", "$1.50", "$1.50"],
    ["Bread", "2", "$1.25", "$2.50"]
]
data = [columns] + rows
col_widths = [40, 30, 30, 30]
colors = [(200, 220, 255)] + [(255, 255, 255) if i % 2 == 0 else (230, 240, 255) for i in range(len(rows))]
tick_rows = [1, 2, 4]  # Indexes of rows with ticks (rows start after header)

# Create and save the PDF
pdf = ReceiptPDF()
pdf.add_page()
pdf.add_logo(logo_path)
pdf.ln(20)
pdf.add_table(data, col_widths, colors, tick_rows)
pdf.output("sample_receipt.pdf")

print("PDF generated: sample_receipt.pdf")